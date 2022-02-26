#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y){
     HANDLE h1;
     h1 = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD h2;
    h2.X = x;
    h2.Y = y;
    SetConsoleCursorPosition(h1,h2);

 }

int main(){

    int c;   
    float d1, d2, res, cantidad2=0, dinero=100.00, cantidad;
    char r='s';

    cout<< "Bienvenido joven"<<endl;
    system("pause");
    system("cls");

    HANDLE C1 = GetStdHandle(STD_OUTPUT_HANDLE);


    do{
        m:
        cout<< "Que operacion desea hacer? \nSuma->1 \nResta->2 \nMultiplicar->3 \nDividir->4 \nIngreso->5 \nEgreso->6 \nMas...->7"<<endl;
        cin>>c;

        if (c==5){
            cout<< "Favor de ingresar cantidad: "<<endl;
            cin>>cantidad;
        }else if (c==6){
            cout<< "Cuanto desea retirar?"<<endl;
            cin>>cantidad;
        }else if (c>=1 && c<=4){
            cout<< "Ingresar el primer digito: "<<endl;
            cin>>d1;
            cout<< "Ingresar el segundo digito: "<<endl;
            cin>>d2;
        }else if (c==7){
            cout<< "\nSalir->z"<<endl;
            cin>>r;
            if (r=='z' || 'Z'){
                goto f; 
            }else{
                goto e;
            }
        }else{
            e:
            SetConsoleTextAttribute(C1,4);
            cout<< "Eleccion no valido"<<endl;
            SetConsoleTextAttribute(C1,7);
            system("pause");
            goto m;
        }
        
        dinero=dinero-cantidad;
        
        switch (c)
        {
        case 1:
            
            res=d1+d2;
            cout<< "La respuesta es: "<<res<<endl;
            system("pause");
            system("cls");
            break;
        
        case 2:
        
            res=d1-d2;
            cout<< "La respuesta es: "<<res<<endl;
            system("pause");
            system("cls");
            break;

        case 3:

            res=d1*d2;
            cout<< "La respuesta es: "<<res<<endl;
            system("pause");
            system("cls");
            break;

        case 4:

            if (d2==0){
                SetConsoleTextAttribute(C1,4);
                cout<< "El segundo digito no puede ser cero favor de verificar e intentarlo nuevamente"<<endl;
                SetConsoleTextAttribute(C1,7);
                system("pause");
                goto m;
            }else{
                res=d1/d2;
                cout<< "La respuesta es: "<<res<<endl;
                system("pause");    
                break;

        case 5:

            cantidad2=cantidad2+cantidad;
            dinero=cantidad2;
            system("pause");
            system("cls");
            break;

        case 6:
            
            if (cantidad<=dinero){
                system("pause");
                break;
            }else if (cantidad>dinero){
                SetConsoleTextAttribute(C1,4);
                cout<< "Losentimos pero ustes no cuenta con esa cantidad de dinero"<<endl;
                SetConsoleTextAttribute(C1,7);
                system("pause");
                system("cls");
                break;

        case 7:
                cout<< "Que tenga un buen dia"<<endl;
                break; 
            }
        }
        }

    s:
    cout<< "Desea continuar? \nContinuar->s \nSalir->z"<<endl;
    cin>>r; 
    system("cls");
    } while (r!='z');
    
    if (r=='s' || 'S'){
        goto m;

    }else if (r=='z' || 'Z')
    {   
        f:
        cout<< "Que tenga un buen dia";
    }else 
    {
        cout<<"Comando invalido"<<endl;
        goto s;
    }
    

//prueba2
    
    getch();
    return 0;
}
