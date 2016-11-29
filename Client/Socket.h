namespace Scut_helper_Scoket{
	//----------------------------------------------------------------------------------------------------------------
	//----------------------------------------------------------------------------------------------------------------
	//receive wrong with 0xfffff
	using namespace System;
	using namespace System::Net;
	using namespace System::Net::Sockets;
	using namespace System::Text;
	using namespace System::Threading;
	using namespace System::Data;

	ref class ClientDo{
	private:Socket^socketAtClient;
	private:IPEndPoint^remoteEP;
	public:
		//---------------------------------------------
		//���ö˿�
		void op_Setport(Int32 portnum){
			IPAddress^localAddr=IPAddress::Parse(IP);
			remoteEP=gcnew IPEndPoint(localAddr,portnum);
			socketAtClient=gcnew Socket(AddressFamily::InterNetwork,SocketType::Stream,ProtocolType::Tcp);//set connection
		}
		//---------------------------------------------
		//���Ӷ˿�
		Boolean op_Connect_Server(){
			try{
				socketAtClient->Connect(remoteEP);
			}
			catch(Exception^){return 0;}
			return 1;
		}
		//---------------------------------------------
		//������Ϣ�����ı�
		Boolean op_Send(String^msg){
			array<Byte>^buffer=Encoding::UTF8->GetBytes(msg);	
			try{
				socketAtClient->Send(buffer);
			}
			catch(Exception^){return 0;}
			return 1;
		}
		//---------------------------------------------
		//������Ϣ
		String^ op_Receive(){
			array<Byte>^buffer=gcnew array<Byte>(102400);
			try{
				socketAtClient->Receive(buffer);
			}
			catch(Exception^){return"0xfffff";}
			String^out=Encoding::UTF8->GetString(buffer);
			return out;
		}
		//---------------------------------------------
		//�ر�����
		Boolean op_Shutdown_Server(){
			try{
				socketAtClient->Shutdown(System::Net::Sockets::SocketShutdown::Both);
			}
			catch(Exception^){return 0;}
			return 1;
		}
	};
}