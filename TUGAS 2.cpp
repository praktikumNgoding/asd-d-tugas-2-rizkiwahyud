#include <iostream>
#include <cstdlib>
using namespace std;
struct node{
	int data;
	node *next;
};
node *head;
int isEmpty(){
	if (head==NULL)
	return 1;
	else 
	return 0;
}
void insertDep(int dtbaru){
	node *baru;
	baru = new node;
	baru->data = dtbaru;
	baru->next = NULL;
	if(isEmpty()==1){
		head = baru;
		head->next = NULL;
	}
	else{
		baru->next = head;
		head = baru;
	}
	cout<<"\nData telah masuk\n";
}
void tampildata(){
	node *bantu;
	bantu = head;
	if(isEmpty() == 0){
		cout<<"\nData yang termasuk kedalam list\n";
		while(bantu !=NULL){
			cout<<bantu->data<<"\n";
			bantu=bantu->next;
		}
		cout<<endl;
	} 
	else cout<<"Masih belum ada data yang dimasukan\n";
}
void hapusDep(){
	node *hapus;
	int y;
	if(isEmpty()==0){
		if(head->next != NULL){
			hapus=head;
			y=hapus->data;
			head = head->next;
			delete hapus;
		}
		else{
			y= head->data;
			head=NULL;
		}
		cout <<y<< "Data telah terhapus\n";
	}
	else cout<<"Data belum ada\n";
}
void hapusBel(){
	node *hapus,*bantu;
	int d;
	if (isEmpty () == 0){
		if (head->next != NULL ){
			bantu = head;
			while (bantu->next->next != NULL){
				bantu = bantu ->next;
			}
			hapus = bantu->next;
			d = hapus -> data;
			bantu->next = NULL;
			delete hapus;
		}
		else{
			d = head -> data;
			head = NULL;
		}
		cout<<"Data telah terhapus\n";
	} 
	else cout<<"Masih belom ada data\n";
}
void insertBel (int dtbaru){
	node *baru, *bantu;
	baru = new node;
	baru -> data = dtbaru;
	baru -> next = NULL;
	if (isEmpty() == 1){
		head = baru;
		head -> next = NULL;
	}else{
		bantu = head;
		while (bantu->next != NULL){
			bantu=bantu->next;
		}
		bantu -> next = baru;
	}
	cout <<"Data telah masuk\n";
}
\
int main(){
	int p;
	int dtbaru;
	cout<<"1. Insert data bagian depan"<<endl;
	cout<<"2. Insert data bagian belakang"<<endl;
	cout<<"3. Tampilan data yang telah anda inputkan"<<endl;
	cout<<"4. Hapus data dari depan"<<endl;
	cout<<"5. Hapus data dari belakang"<<endl;
	cout<<"6. Keluar dari data"<<endl;
	while (true){
		cout<<"Opsi pilihan = ";
		cin>>p;
		if (p== 1 ){
			cout<<"Data = ";
			cin>>dtbaru;
			insertDep(dtbaru);
		}
		else if (p == 2 ){
			cout<<"Data = ";
			cin>>dtbaru;
			insertBel(dtbaru); 
		}	
		else if (p == 3 ){
			tampildata(); 
		}
		else if (p == 4 ){
			hapusDep(); 
		}
		else if (p == 5 ){
			hapusBel(); 
		}
		else if (p == 6 ){
			break;
		}
	}
}
