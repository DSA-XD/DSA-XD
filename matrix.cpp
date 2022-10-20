/*
matrix multiplication ,addition
*/
#include<iostream>
using namespace std;

class matrix{
    public:
        int r1,c1,r2,c2;
        int a[20][20],b[20][20];
        void get();
        void display();
        void sum();
        void multi();
        void transpose();


};
void matrix::get(){
    cout<<"\n ENTER ROW OF MATRIX A :";
    cin>>r1;
    cout<<"\n ENTER COL OF MATRIX A :";
    cin>>c1;
    cout<<"\n enter values\n";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>a[i][j];
        }
        cout<<"\n";
    }
    cout<<"\n ENTER ROW OF MATRIX B :";
    cin>>r2;
    cout<<"\n ENTER COL OF MATRIX B :";
    cin>>c2;
    cout<<"\n enter values\n";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>b[i][j];
        }
        cout<<"\n";
    }

}
void matrix::display(){
    cout<<"\n-----------DISPLAYING MATRIX A----------------\n";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\n-----------DISPLAYING MATRIX B----------------\n";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<b[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
void matrix::sum(){
    if(r1==r2&&c1==c2){
        int add[r1][c1];
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                add[i][j]=a[i][j]+b[i][j];
            }
        }
        cout<<"\n --------DISPLAYING ADDITION OF TWO MATRIX------\n";
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                cout<<add[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
    else{
        cout<<"\n ADDITION NOT POSSIBLE\n";
    }

}

void matrix::multi(){
    if(c1==r2){
            int multi[r1][c2]={0};
            for(int i=0;i<r1;i++){
                for(int m=0;m<c2;m++){
                    int sum=0;
                    for(int j=0,n=0;j<c1,n<c1;j++,n++){
                        sum+=a[i][j]*b[n][m];
                    }
                multi[i][m]=sum;
                }
            }
           
            cout<<"\n------DISPLAYING MULTIPLICATION OF TWO MATRIX-------\n";
            for(int i=0;i<r1;i++){
                for(int j=0;j<c2;j++){
                    cout<<multi[i][j]<<"\t";
                }
                cout<<"\n";
            }


    }
    else{
        cout<<"\n MULTIPLICATION OF TWO MATRIX NOT POSSIBLE\n";
    }

}
void matrix::transpose(){
    int transA[c1][r1];
    for(int i=0,y=0;i<r1,y<r1;i++,y++){
        for(int j=0,x=0;j<c1,x<c1;j++,x++){
                transA[x][y]=a[i][j];
        }
    }
    cout<<"\n------- TRANSPOSE OF MATRIX A--------\n";
    for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
            cout<<transA[i][j]<<"\t";
        }
        cout<<"\n";
    }

    int transB[c2][r2];
    for(int i=0,y=0;i<r2,y<r2;i++,y++){
        for(int j=0,x=0;j<c2,x<c2;j++,x++){
                transB[x][y]=b[i][j];
        }
    }

    cout<<"\n -------TRANSPOSE OF MATRIX B--------\n";
    for(int i=0;i<c2;i++){
        for(int j=0;j<r2;j++){
            cout<<transB[i][j]<<"\t";
        }
        cout<<"\n";
    }

}

int main(){
    int choice;
    matrix m;
    while(1){
        cout<<"\n\n-----------MENU-------\n";
        cout<<"1. INPUT MATRIX\n";
        cout<<"2. DISPLAY MATRIX\n";
        cout<<"3. SUM OF TWO MATRIX\n";
        cout<<"4. MULTIPLICATION O  F TWO MATRIX\n";
        cout<<"5. TRANSPOSE OF MATRIX\n";
        cout<<" enter any no to exit\n";
        cout<<"\n enter your choice:";
        cin>>choice;
        if (choice==1){
                m.get();
        }
        else if(choice==2){
            m.display();
        }
        else if(choice==3){
                m.sum();
        }
        else if(choice==4){
                m.multi();
        }
        else if(choice==5){
            m.transpose();
        }
        else{
            cout<<"\nexiting successfully.......";
            break;
        }
    }
    return 0;
}
