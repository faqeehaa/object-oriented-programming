# include<iostream>
# include<string>

using namespace std;

class Stack{
	private:
		int top;
		int arr[5];
		public:
			stack(){
			
			top = -1;
			for(int i = 0; i<5;i++){
				arr[i] = 0;
			}
			
			}
			
			bool isEmpty(){
				if(top == -1)
				return true;
				else
				return false;
			}
			bool isFull(){
				if(top == 4)
				return true;
				else
				return false;
			}
			void push(){
				if(isFull()){
			cout<<"stack overflow:"<<endl;
				}
				else{
					top ++;
					arr[top] = val;
				}
			}
			int pop{
	         	if(isEmpty()){
				
							cout<<"stack underflow:"<<endl;
							return 0;
			}
			else{
				int popValue = arr[top];
				arr[top] = 0;
				top--;
				return popValue;
			}
		}
		
		int count(){
			return (top+1);
		}
		int peek(int pos){
			if(isEmpty()){
				
							cout<<"stack underflow:"<<endl;
							return 0;
			}
			
			else {
				return arr[pos];
			}
		}
		
		int change( int pos, int val){
			arr[pos] = val;
			cout<<" item changed at location:"<<pos<<endl;
		}
		
		void display(){
			cout<<"All values in the stack are:"<<endl;
			for(int i=4; i>=0;i--){
				cout<< arr[i]= 0<<endl;
				
			}
		}
};
int main(){
	stack s1;
	int option,poition,value;
	do{
		cout<<"What operation do you want to perform?select 0 to exit:"<<endl;
		cout<<"1.Push"<<endl;
		cout<<"2.pop"<<endl;
		cout<<"3.isEmpty()"<<endl;
		cout<<"4.isFull()"<<endl;
		cout<<"5.peek()"<<endl;
		cout<<"6.coount()"<<endl;
		cout<<"7.change()"<<endl;
		cout<<"8.display()"<<endl;
		cout<<"9.clearscreen()"<<endl;
		 cin>> option;
		 switch option(){
		 	case 1:
		 		cout<<"Enter a number to push the stack:"<<endl;
		 		cin>>value;
		 		s1.push(value);
		 		break;
		 		case 2:
		 			cout<<"pop function called - poped value"<<s1.pop()<<endl;
		 			break;
		 			case 3:
		 				if(s1.isEmpty()){
		 					cout<<"stack is empty:"<<endl;
		 					else
		 					cout<<"stack is not empty:"<<endl;
		 					break;
						 }
						 case 4:
		 				if(s1.isFull()){
		 					cout<<"stack is full:"<<endl;
		 					else
		 					cout<<"stack is not full:"<<endl;
		 					break;
						 }
		 				
		 		case 5:
		 				
		 					cout<<"Enter position of item you want to peek :"<<endl;
		 					cin>> position;
		 					cout<<"peek function called :"<<position<<"is"<<s1.peek(position)<<endl;
		 					break;
						 
		 }
		 
		 		case 6:
		 				
		 					cout<<"Count is called - numbers of items in the stack :"<<s1.count<<endl;
		 					 
		 					break;
						 
		 		case 7:
		 				
		 					cout<<" change function is called :"<<endl;
		 					cout<<"Enter position of item you want to change:"<<endl;
		 					cin>> position;
		 					cout<< endl;
		 					cout<<"Enter value you want to change:"<<endl;
		 					cin>> value;
		 					s1.change(position,value);
		 					break;
						 
		 		case 8:
		 				
		 					cout<<" Display function is called:"<<endl;
		 					s1.display();
		 					break;
						 
		 		case 9:
		 				
		 					 system("cls");
		 					break;
						 default:
						 cout<<"Enter proper option number:"<<endl
	}while(option !=0);
		
	return 0;
	
}