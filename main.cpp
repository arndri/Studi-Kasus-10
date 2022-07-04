#include <iostream>
using namespace std;

class node{
  public:
  string nama;
  int nim;
  node *next;
  node *head=NULL;
  void input();
  void output();
};

void node::input(){
  node *temp;
  int panjang;
  cout<<"Masukkan Jumlah Mahasiswa : ";cin>>panjang;
  for(int i=0;i<panjang;i++){
    cout<<"------------------------------------\n";
    temp=new node;
    cout<<"Masukkan Nama Mahasiswa : ";cin>>temp->nama;
    cout<<"Masukkan NIM Mahasiswa  : ";cin>>temp->nim;
    temp->next=head;
    head=temp;
  }
}



void node::output(){
  node *temp;
  temp=head;
  cout<<"=====================================\n";
  cout<<"Daftar Mahasiswa Di Babak Final\n";
  while(temp != NULL){
    cout<<"------------------------------------\n";
    cout<<"Nama  : "<<temp->nama<<endl;
    cout<<"NIM  : "<<temp->nim<<endl;
    temp=temp->next;
  }
}

int main() {
  node a;
  a.input();
  a.output();
}