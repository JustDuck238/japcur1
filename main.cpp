#include "src/api.h"
using namespace std;

int main(){

VK::Client api;
if(api.auth(login, pass, access_token))
{
  cout << "Auth ok" << endl;
  cout << "Access token: " << api.access_token() << endl << endl;  
  cout << api.call("wall.post", "owner_id=12345&message=Test");
}
else{
  cout << "Auth fail" << endl;
}
}
