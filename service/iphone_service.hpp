#include<string>
#include<vector>
#include"../model/iphone.hpp"
#include"../repository/iphone_repo.hpp"

using namespace std;

vector<IPhone> getAllIPhones(){
    return iphoneRepositories;
}

IPhone getIPhoneById(int id){
    // your code here...

    return {};
}

void addIPhone(IPhone iphone){
    // your code here...
    iphoneRepositories.push_back(iphone);
    cout<<"[+] New iPhone added successfully\n";
}

bool deleteIPhoneById(int id){
    // your code here...
    
    return false;
}