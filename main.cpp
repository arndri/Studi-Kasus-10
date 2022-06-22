#include <iostream>
using namespace std;

class node{
  public:
  string nama;
  int nim;
  node* next;
};
//Fungsi Output Andri Pratama
void cetak(node* n){
  int i=1;
  cout<<"Data Finalis Lomba Parmatika"<<endl;
  cout<<"=================================="<<endl;
  while(n!=NULL){
    cout<<"Data ke-"<<i<<"\n";
    cout<<"Nama : "<<n->nama<<"\n";
    cout<<"NIM  : "<<n->nim<<"\n";
    n=n->next;
    i++;
    cout<<"=================================="<<endl;
  }
}

void proses(){
  
}

int main() {
  //Input dan Proses Dini Rohmah & Shaluna Fasya Elmina
  node * head=NULL;
  node * second=NULL;
  node * third=NULL;
  node * fourth=NULL;
  node * fifth=NULL;

  //Membuat node pada masing-masing pointer
  head=new node();
  second=new node();
  third=new node();
  fourth=new node();
  fifth=new node();

  //Menggunakan pointer temp ke pointer node pertama 
  node*temp=head;

  //Menghubungkan node
  head->next=second;
  second->next=third;
  third->next=fourth;
  fourth->next=fifth;
  fifth->next=NULL;
  
  //Input
  cout<<"--------------------------------"<<endl;
  while(temp!=NULL){
    cout<<"Masukkan Nama : ";cin>>temp->nama;
    cout<<"Masukkan NIM  : ";cin>>temp->nim;
    temp=temp->next;
    cout<<"--------------------------------"<<endl;
  }


  //Output
  cetak(head);
  
}