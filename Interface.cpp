//
// Created by patri on 16/11/2021.
//

#include "Interface.h"

void Interface::comando(const string comando) {
    istringstream iss(comando);

    string instrucao;
    int linha, coluna, quanto;
    string tipo;

    iss >> instrucao; //primeira palavra que esta na string comando para a minha string instrucao

    //exec <nomeFicheiro>
    if (instrucao == "exec") {
        cout << "Comando " << instrucao << "por implementar" << endl;
    }

    //FIZ UM COMMENT!

    //cons <tipo> <linha> <coluna>
    if (instrucao == "cons") {
        if (iss >> tipo) {
            if (iss >> linha) {
                if (iss >> coluna) {
                    if(tipo == "minaf" || tipo == "minac" || tipo == "central" || tipo == "bat" || tipo == "fund" || tipo == "edx") {
                        if (simulacao.podeConstruir(linha, coluna)) {
                            if (linha < simulacao.getLinhas() && linha >= 0) {
                                if (coluna < simulacao.getColunas() && coluna >= 0) {
                                    simulacao.constroiEdificio(tipo, linha, coluna);
                                } else {
                                    cout << "Erro de tamanho: coluna tem que estar entre 0 e " << simulacao.getColunas() - 1 << endl;
                                }
                            } else {
                                cout << "Erro de tamanho: linha tem que estar entre 0 e " << simulacao.getLinhas() - 1 << endl;
                            }
                        } else {
                            cout << "Erro de construcao: Edificio ja construido" << endl;
                        }
                    } else {
                        cout << "Erro de tipo: Tipos validos:  minaf | minac | central | bat | fund | edx" << endl;
                    }
                } else {
                    cout << "Erro de sintaxe: cons <tipo> <linha> <coluna>" << endl;
                }
            } else {
                cout << "Erro de sintaxe: cons <tipo> <linha> <coluna>" << endl;
            }
        } else {
            cout << "Erro de sintaxe: cons <tipo> <linha> <coluna>" << endl;
        }
    }

    // liga <linha> <coluna>
    if (instrucao == "liga") {
        if (iss >> linha) {
            if (iss >> coluna) {
                cout << "Comando " << instrucao << "por implementar" << endl;
            } else {
                cout << "Erro de formato: liga <linha> <coluna>" << endl;
            }
        }
    }

    // des <linha> <coluna>
    if (instrucao == "des") {
        cout << "Comando " << instrucao << "por implementar" << endl;
    }

    //move <id> <linha> <coluna>
    if (instrucao == "move") {
        cout << "Comando " << instrucao << "por implementar" << endl;
    }

    // vende <tipo> <quanto> ou vende <linha> <coluna>
    if (instrucao == "vende") {
        iss >> tipo;

        istringstream issTipoLinha(tipo);

        if (issTipoLinha >> linha) {
            if (iss >> coluna) {
                cout << "Comando " << instrucao << "por implementar" << endl;
            } else {
                cout << "Erro de formato: vende <linha> <coluna>" << endl;
            }
        } else {
            if (iss >> quanto) {
                cout << "Comando " << instrucao << "por implementar" << endl;
            } else {
                cout << "Erro de formato: vende <tipo> <quanto>" << endl;
            }
        }


    }

    //cont <tipo>
    if (instrucao == "cont") {
        if (iss >> tipo) {
            if(tipo == "miner") {
                simulacao.contrataTrabalhador("miner");
            } else {
                cout << "Erro de tipo" << endl << "Tipos validos: miner" << endl;
            }
        }
    }

    //list <linha> <coluna>
    if (instrucao == "list") {
        // cout << "Comando " << instrucao << "por implementar" << endl;

        if (iss >> linha) {
            if (linha < simulacao.getLinhas() && linha >= 0) { //verifica se o tamanho da linha esta dentro dos limites
                if (iss >> coluna) {
                    if (coluna < simulacao.getColunas() && coluna >= 0) {
                        cout << simulacao.getZona(linha, coluna) << endl; //imprimir a zona
                    }else{
                        cout << "Erro de tamanho: Coluna tem de estar entre 0 e "<< simulacao.getColunas() - 1 << endl;
                    }
                } else {
                    //recebo a linha mas a coluna nao
                    cout << "Erro de sintaxe: list <linha> <coluna>" << endl;
                }
            }else{
                cout << "Erro de tamanho: linha tem de estar entre 0 e "<< simulacao.getLinhas() - 1 << endl;
            }

        } else {
        cout << simulacao.tostring();
    }


    }

    //next
    if (instrucao == "next") {
        cout << "Comando " << instrucao << "por implementar" << endl;
    }

    //save <nome>
    if (instrucao == "save") {
        cout << "Comando " << instrucao << "por implementar" << endl;
    }

    //load <nome>
    if (instrucao == "load") {
        cout << "Comando " << instrucao << "por implementar" << endl;
    }

    //apaga <nome>
    if (instrucao == "apaga") {
        cout << "Comando " << instrucao << "por implementar" << endl;
    }

    //config <ficheiro>
    if (instrucao == "config") {
        cout << "Comando " << instrucao << "por implementar" << endl;
    }

    //debcash <valor>
    if (instrucao == "debcash") {
        cout << "Comando " << instrucao << "por implementar" << endl;
    }

    //debed <tipo> <linha> <coluna>
    if (instrucao == "debed") {
        cout << "Comando " << instrucao << "por implementar" << endl;
    }

    //debkill <id>
    if (instrucao == "debkill") {
        cout << "Comando " << instrucao << "por implementar" << endl;
    }


}

Interface::Interface() : simulacao(3, 3) {

}
