#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
    srand(time(NULL));

    int n;
    float precio_base, precio_final, descuento;
    float suma_ingresado = 0, acumulado_iva = 0, total_descontado = 0;
    float producto_mas_caro = -1, producto_mas_barato = 999999;

    cout<<"Digite la cantidad total de productos vendidos en el dia (N): "; cin>>n;

    for(int i = 1; i <= n; i++){
        // Genera precio base entre 10 y 10000 Bs.
        precio_base = 10 + rand() % (10000 - 10 + 1);

        descuento = 0;
        if(precio_base > 2500){
            descuento = precio_base * 0.05;
        }

        precio_final = precio_base - descuento;

        suma_ingresado += precio_final;
        acumulado_iva += (precio_base * 0.13);
        total_descontado += descuento;

        if(precio_final > producto_mas_caro){
            producto_mas_caro = precio_final;
        }
        if(precio_final < producto_mas_barato){
            producto_mas_barato = precio_final;
        }
    }

    cout<<"\n================ REPORTE DE VENTAS ================"<<endl;
    cout<<"Suma total ingresado en el dia: "<<suma_ingresado<<" Bs."<<endl;
    cout<<"Monto total acumulado por IVA (13%): "<<acumulado_iva<<" Bs."<<endl;
    cout<<"Cantidad total descontada a clientes: "<<total_descontado<<" Bs."<<endl;
    cout<<"Producto mas caro (monto final): "<<producto_mas_caro<<" Bs."<<endl;
    cout<<"Producto mas barato (monto final): "<<producto_mas_barato<<" Bs."<<endl;

    cout<<"\n\n";
    system("pause");
    return 0;
}