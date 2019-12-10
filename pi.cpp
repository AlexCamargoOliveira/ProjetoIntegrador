#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <string.h>
#include <math.h>
#include <iostream>
using namespace std;

#define ELEMENTOS 44

typedef struct idh_sub{
	
		string pais[ELEMENTOS];
		int pos[ELEMENTOS], mepercentil, percmedian, mamediana, classes, fi[50], fac[50], fa;
		float idh[ELEMENTOS], liminf[50], limsup[50], amplitude, p, li, perc, percentil, mediana, valores[ELEMENTOS];
		
		idh_sub *prox;
		
	}lista_idh;

void problema (lista_idh *pRecebido);

int main(int argc, char** argv) {
	lista_idh *inicio_lista;
	lista_idh *temporario;
	int i;
	int opt = 0;
	
	inicio_lista = new lista_idh;
	inicio_lista -> prox = NULL;
	
	for(;;)
	problema(inicio_lista);
	
	return 0;
}

void problema (lista_idh *pRecebido){
	lista_idh *temporario;
	int opcao = 0;
	int i, x;
	
	temporario = new lista_idh;
	temporario->pos[0] = 1;
	temporario->pos[1] = 2;
	temporario->pos[2] = 3;
	temporario->pos[3] = 4;
	temporario->pos[4] = 5;
	temporario->pos[5] = 6;
	temporario->pos[6] = 7;
	temporario->pos[7] = 8;
	temporario->pos[8] = 9;
	temporario->pos[9] = 10;
	temporario->pos[10] = 11;
	temporario->pos[11] = 12;
	temporario->pos[12] = 13;
	temporario->pos[13] = 14;
	temporario->pos[14] = 15;
	temporario->pos[15] = 16;
	temporario->pos[16] = 17;
	temporario->pos[17] = 18;
	temporario->pos[18] = 19;
	temporario->pos[19] = 20;
	temporario->pos[20] = 21;
	temporario->pos[21] = 22;
	temporario->pos[22] = 23;
	temporario->pos[23] = 24;
	temporario->pos[24] = 25;
	temporario->pos[25] = 26;
	temporario->pos[26] = 27;
	temporario->pos[27] = 28;
	temporario->pos[28] = 29;
	temporario->pos[29] = 30;
	temporario->pos[30] = 31;
	temporario->pos[31] = 32;
	temporario->pos[32] = 33;
	temporario->pos[33] = 34;
	temporario->pos[34] = 35;
	temporario->pos[35] = 36;
	temporario->pos[36] = 37;
	temporario->pos[37] = 38;
	temporario->pos[38] = 39;
	temporario->pos[39] = 40;
	temporario->pos[40] = 41;
	temporario->pos[41] = 42;
	temporario->pos[42] = 43;
	temporario->pos[43] = 44;
	temporario->pais[0] = "Quenia              ";
	temporario->pais[1] = "Nepal               ";
	temporario->pais[2] = "Paquistao           ";
	temporario->pais[3] = "Mianmar             ";
	temporario->pais[4] = "Angola              ";
	temporario->pais[5] = "Suazilandia         ";
	temporario->pais[6] = "Tanzania (Republica)";
	temporario->pais[7] = "Nigeria             ";
	temporario->pais[8] = "Camaroes            ";
	temporario->pais[9] = "Madagascar          ";
	temporario->pais[10] = "Zimbabue           ";
	temporario->pais[11] = "Mauritania         ";
	temporario->pais[12] = "Ilhas Salomao      ";
	temporario->pais[13] = "Papua-Nova Guine   ";
	temporario->pais[14] = "Comores            ";
	temporario->pais[15] = "Iemen              ";
	temporario->pais[16] = "Lesoto             ";
	temporario->pais[17] = "Togo               ";
	temporario->pais[18] = "Haiti              ";
	temporario->pais[19] = "Ruanda             ";
	temporario->pais[20] = "Uganda             ";
	temporario->pais[21] = "Benin              ";
	temporario->pais[22] = "Sudao              ";
	temporario->pais[23] = "Djibouti           ";
	temporario->pais[24] = "Sudao do Sul       ";
	temporario->pais[25] = "Senegal            ";
	temporario->pais[26] = "Afeganistao        ";
	temporario->pais[27] = "Costa do Marfim    ";
	temporario->pais[28] = "Malaui             ";
	temporario->pais[29] = "Etiopia            ";
	temporario->pais[30] = "Gambia             ";
	temporario->pais[31] = "Congo (Republica)  ";
	temporario->pais[32] = "Liberia            ";
	temporario->pais[33] = "Guinea-Bissau      ";
	temporario->pais[34] = "Mali               ";
	temporario->pais[35] = "Mocambique         ";
	temporario->pais[36] = "Serra Leoa         ";
	temporario->pais[37] = "Guine Equatorial   ";
	temporario->pais[38] = "Burkina Faso       ";
	temporario->pais[39] = "Burundi            ";
	temporario->pais[40] = "Chade              ";
	temporario->pais[41] = "Eritrea            ";
	temporario->pais[42] = "Rep. Centro Africana";
	temporario->pais[43] = "Niger              ";
	temporario->idh[0] = 0.548;
	temporario->idh[1] = 0.548;
	temporario->idh[2] = 0.538;
	temporario->idh[3] = 0.536;
	temporario->idh[4] = 0.532;
	temporario->idh[5] = 0.531;
	temporario->idh[6] = 0.521;
	temporario->idh[7] = 0.514;
	temporario->idh[8] = 0.512;
	temporario->idh[9] = 0.51;
	temporario->idh[10] = 0.509;
	temporario->idh[11] = 0.506;
	temporario->idh[12] = 0.506;
	temporario->idh[13] = 0.505;
	temporario->idh[14] = 0.503;
	temporario->idh[15] = 0.498;
	temporario->idh[16] = 0.497;
	temporario->idh[17] = 0.484;
	temporario->idh[18] = 0.483;
	temporario->idh[19] = 0.483;
	temporario->idh[20] = 0.483;
	temporario->idh[21] = 0.48;
	temporario->idh[22] = 0.479;
	temporario->idh[23] = 0.47;
	temporario->idh[24] = 0.467;
	temporario->idh[25] = 0.466;
	temporario->idh[26] = 0.465;
	temporario->idh[27] = 0.462;
	temporario->idh[28] = 0.445;
	temporario->idh[29] = 0.442;
	temporario->idh[30] = 0.441;
	temporario->idh[31] = 0.433;
	temporario->idh[32] = 0.43;
	temporario->idh[33] = 0.42;
	temporario->idh[34] = 0.419;
	temporario->idh[35] = 0.416;
	temporario->idh[36] = 0.413;
	temporario->idh[37] = 0.411;
	temporario->idh[38] = 0.402;
	temporario->idh[39] = 0.4;
	temporario->idh[40] = 0.392;
	temporario->idh[41] = 0.391;
	temporario->idh[42] = 0.35;
	temporario->idh[43] = 0.348;
 	
	cout<<"\n\tProblema\n\tA ONU criou um projeto para arrecadar fundos para paises com baixo desenvolvimento humano, conforme tabela \n\tabaixo. Foram arrecadados U$$ 25 mi neste projeto, e foi decidido que o investimento deste valor sera feito \n\tda seguinte forma:\n\t* 50% para paises com idh abaixo do percentil 15;\n\t* 30% para paises com idh entre o percentil 15 e a mediana;\n\t* 20% para paises com idh no terceiro quartil;\n\tA reparticao do valor para cada um destes grupos sera feita de forma igual entre seus membros.\n\tDetermine o valor que cada pais recebera respectivamente.\n";
	
	cout<<"\n\tDeseja Visualizar a tabela?";
	cout<<"\n\t1 - SIM";
	cout<<"\n\t2 - NAO";
	cout<<"\n\tDigite a opcao desejada: ";
	cin>>opcao;
	
	if(opcao == 1){
		cout<<"\n\tPosicao |\t\t        Pais               \t|\tIDH";
		for(i=0;i<ELEMENTOS;i++){
		cout<<"\n\t"<<temporario->pos[i]<<" \t|\t"<<temporario->pais[i]<<"      \t\t|\t"<<"";printf("%.3f", temporario->idh[i]);
		}
		printf("\n");
	}
	
	cout<<"\n\tQual a quantidade de classes estipulada para a distribuicao? ";
	cin>>temporario->classes;
	
	temporario->amplitude = (temporario->idh[0] - temporario->idh[ELEMENTOS-1])/temporario->classes;

	temporario->liminf[0] = temporario->idh[ELEMENTOS-1];
	temporario->limsup[0] = temporario->liminf[0] + temporario->amplitude;
	
	for(i=1; i<temporario->classes; i++){
		temporario->liminf[i] = temporario->limsup[i-1] + 0.001;
		temporario->limsup[i] = temporario->liminf[i] + temporario->amplitude;
	}
	
	cout<<"\n\tFrequencia	\tFi	\tFac";
	for(i=0; i<temporario->classes; i++){
		for(x=0; x<ELEMENTOS; x++){
			if((temporario->idh[x] >= temporario->liminf[i] & temporario->idh[x] <= temporario->limsup[i]) || (temporario->idh[x] > temporario->limsup[i] & temporario->idh[x] < temporario->liminf[i+1])){
				temporario->fi[i] = temporario->fi[i] + 1;
			}
		}	
		
		temporario->fac[i] = temporario->fac[i -1] + temporario->fi[i];
		
		printf("\n\t%.3f |- %.3f	\t%d	\t%d", temporario->liminf[i], temporario->limsup[i], temporario->fi[i], temporario->fac[i]);
	}
	printf("\n");
	
	cout<<"\n\tInforme o percentil procurado: ";
	cin>>temporario->p;
	
	temporario->perc = (temporario->p/100) * temporario->fac[temporario->classes-1];
	
	for(i=0; i<temporario->classes; i++){
		if(temporario->perc <= temporario->fac[i]){
			temporario->percentil = temporario->liminf[i] + (((temporario->perc - temporario->fac[i-1])*temporario->amplitude)/temporario->fi[i]);			
			break;
		}		
	}
	
	printf("\n\tValor do percentil 15: %.3f\n", temporario->percentil);
	
	int meio = ELEMENTOS / 2;
	int meio2 = meio - 1;
		
	temporario->mediana = (temporario->idh[meio2] + temporario->idh[meio])/2;
	
	printf("\n\tValor da mediana: %.3f\n", temporario->mediana);
	
	cout<<"\n\tDeseja Visualizar a tabela?";
	cout<<"\n\t1 - SIM";
	cout<<"\n\t2 - NAO";
	cout<<"\n\tDigite a opcao desejada: ";
	cin>>opcao;
	
	if(opcao == 1){
		
	int w=0,y=0, z=0;
	
	for(i=0;i<ELEMENTOS;i++){
		if(temporario->percentil >= temporario->idh[i]){
			temporario->mepercentil = temporario->mepercentil + 1;			
		}else if(temporario->percentil < temporario->idh[i] && temporario->mediana >= temporario->idh[i]){
			temporario->percmedian = temporario->percmedian + 1;
		}else{
			temporario->mamediana = temporario->mamediana + 1;
		}
	}
	float calc1 = (25000000*0.50)/temporario->mepercentil;		
	float calc2 = (25000000*0.30)/temporario->percmedian;
	float calc3 = (25000000*0.20)/temporario->mamediana;
		
	for(i=0;i<ELEMENTOS;i++){
		if(temporario->percentil >= temporario->idh[i]){
			temporario->valores[i] = calc1;					
		}else if(temporario->percentil < temporario->idh[i] && temporario->mediana >= temporario->idh[i]){
			temporario->valores[i] = calc2;
		}else{
			temporario->valores[i] = calc3;
			//cout << temporario->pais[i]; printf(" | $ %.2f \n", temporario->valores[i]);
		}
	}
	
	cout<<"\n\tPosicao |\t\t        Pais               \t|     Valor investido";
	for(i=0;i<ELEMENTOS;i++){
		cout<<"\n\t"<<temporario->pos[i]<<" \t|\t"<<temporario->pais[i]<<"      \t\t|\t"<<"";printf("$ %.2f ", temporario->valores[i]);
	}
	printf("\n");
	}
	cout<<"\n\tDeseja fazer um novo calculo?";
	cout<<"\n\t1 - SIM";
	cout<<"\n\t2 - NAO";
	cout<<"\n\tDigite a opcao desejada: ";
	cin>>opcao;
	
	if(opcao == 2){
		exit(0);
	}
	
	system("cls");
}
