#include <iostream>
typedef long long ll;
int main(void){
    ll n,k;
    std::cin>>n>>k;
    while (k--) {
        if (n%10==0) {
            n/=10; 
        }else {
            n--;
        }
    }
    std::cout<<n<<'\n';
}