#include <iostream>
  using namespace std;
  class shape{
  	public:
  	int width;
  	int height;
  	
  };
  class triangle:public shape{
  public:
  void draw(){
  
	cout<<"Draw a Triangle"<<endl;
  	cout<<"height"<<height<<"Width"<<width<<endl;
  }
  };
  class square:public shape{
  	public:
  		 void draw(){
  		 	
  	cout<<"Draw a Square"<<endl;
  	cout<<"height"<<height<<"Width"<<width<<endl;
  	
  }
  };
  int main(){
  switch() {
  	case 1:
  	cout<<"show triangle"<<endl;
  	break;
  	case 2:
  	cout<<"show square"<<endl;
  	break;
  	
}
  	
  
  }
