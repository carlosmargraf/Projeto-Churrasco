#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int adulto_ceveja, adulto_naoalcool, crianca, op1, op2, op_1;
    int cerveja = 5;
    double refri_adulto = 1.500, refri_crianca = 0.750, carvao = 0.833, carne_adulto = 0.400, carne_criança = 0.200;
    double op3, op4, op_3, op_4, total_refri, total_carne;

    cout << "             PROGRAMA - CURRAS.COM          " << endl << endl;

    cout << "              TABELA DE QUANTIDADE          " << endl << endl;
    cout << ">> ................. CARNE .............. <<" << endl;
    cout << "............................................" << endl;
    cout << "........ Adulto 400 G ## Criança 200 G ....." << endl;
    cout << "............................................" << endl;
    cout << ">> ............... CERVEJA .............. <<" << endl;
    cout << "............................................" << endl;
    cout << "............. 5 Latas P/ Adulto ............" << endl;
    cout << "............................................" << endl;
    cout << ">>........ REFRIGERANTE  (SUCO/ÁGUA) .....<<" << endl;
    cout << "............................................" << endl;
    cout << "....... 1,5Ml Adulto ## 750Ml Criança ......" << endl;
    cout << "............................................" << endl;
    cout << ">> ................ CARVÃO .............. <<" << endl;
    cout << "............................................" << endl;
    cout << "............ 5kg P/ 6Kg de Carne ..........." << endl;
    cout << "............................................" << endl << endl;
    cout << ">> Aduldos que NÂO bebem bebidas alcoólicas: ";
    cin >> adulto_naoalcool;
    cout << ">> Adultos que bebem cerveja:............... ";
    cin >> adulto_ceveja;
    cout << ">> Quantidade de Crianças:.................. ";
    cin >> crianca;

    if(adulto_ceveja >= 0 && adulto_naoalcool >=0 && crianca >= 0)
    {
        op1 = (adulto_ceveja + adulto_naoalcool) * carne_adulto;
        op_1 = crianca * carne_criança;
        total_carne = op1 + op_1;
        op2 = adulto_ceveja * cerveja;
        op3 = adulto_naoalcool * refri_adulto;
        op_3 = crianca * refri_crianca;
        total_refri = op3 + op_3;
        op4 = total_carne * carvao;
    }

    cout << fixed << setprecision(2);
    cout << setprecision(2) << ">> " << total_carne << " kg de carne." << endl;
    cout << ">> " << op2 << " Latas de cerveja" << endl;
    cout << setprecision(2) << ">> " << total_refri << " Litros de refrigerente ou água" << endl;
    cout << setprecision(2) << ">> " << op4 << " Kg de carvão "<< endl << endl << endl;

    return 0;
}
