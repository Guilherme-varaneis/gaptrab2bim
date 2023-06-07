/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   system_acad.cpp
 * Author: guiva
 * 
 * Created on 5 de Junho de 2023, 15:02
 */

#include "system_acad.hpp"

system_acad::system_acad() {
}

system_acad::system_acad(const system_acad& orig) {
}

system_acad::~system_acad() {
}
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Struct Professor
struct Professor {
    int codigoProfessor;
    string nome;
    string endereco;
};

// Struct Disciplina
struct Disciplina {
    int codigoDisciplina;
    string descricao;
    int cargaHoraria;
};

// Struct Atribuicao
struct Atribuicao {
    int codigoAtribuicao;
    string dataAtribuicao;
    int codigoProfessor;
    int codigoDisciplina;
};

// Função para adicionar um novo professor
void adicionarProfessor(vector<Professor>& professores) {
    Professor novoProfessor;
    cout << "Digite o código do professor: ";
    cin >> novoProfessor.codigoProfessor;
    cout << "Digite o nome do professor: ";
    cin.ignore();
    getline(cin, novoProfessor.nome);
    cout << "Digite o endereço do professor: ";
    getline(cin, novoProfessor.endereco);

    professores.push_back(novoProfessor);
    cout << "Professor adicionado com sucesso!" << endl;
}

// Função para adicionar uma nova disciplina
void adicionarDisciplina(vector<Disciplina>& disciplinas) {
    Disciplina novaDisciplina;
    cout << "Digite o código da disciplina: ";
    cin >> novaDisciplina.codigoDisciplina;
    cout << "Digite a descrição da disciplina: ";
    cin.ignore();
    getline(cin, novaDisciplina.descricao);
    cout << "Digite a carga horária da disciplina: ";
    cin >> novaDisciplina.cargaHoraria;

    disciplinas.push_back(novaDisciplina);
    cout << "Disciplina adicionada com sucesso!" << endl;
}

// Função para atribuir uma disciplina a um professor
void atribuirDisciplina(vector<Atribuicao>& atribuicoes, const vector<Professor>& professores, const vector<Disciplina>& disciplinas) {
    Atribuicao novaAtribuicao;
    cout << "Digite o código da atribuição: ";
    cin >> novaAtribuicao.codigoAtribuicao;
    cout << "Digite a data da atribuição: ";
    cin.ignore();
    getline(cin, novaAtribuicao.dataAtribuicao);

    // Exibir a lista de professores disponíveis
    cout << "Professores disponíveis:" << endl;
    for (const Professor& professor : professores) {
        cout << "Código: " << professor.codigoProfessor << " | Nome: " << professor.nome << endl;
    }
    cout << "Digite o código do professor: ";
    cin >> novaAtribuicao.codigoProfessor;

    // Exibir a lista de disciplinas disponíveis
    cout << "Disciplinas disponíveis:" << endl;
    for (const Disciplina& disciplina : disciplinas) {
        cout << "Código: " << disciplina.codigoDisciplina << " | Descrição: " << disciplina.descricao << endl;
    }
    cout << "Digite o código da disciplina: ";
    cin >> novaAtribuicao.codigoDisciplina;

    atribuicoes.push_back(novaAtribuicao);
    cout << "Atribuição realizada com sucesso!" << endl;
}

int main() {
    vector<Professor> professores;
    vector<Disciplina> disciplinas;
    vector<Atribuicao> atribuicoes;

    int opcao;
    do {
        cout << "========= MENU =========" << endl;
        cout << "1. Adicionar Professor" << endl;
        cout << "2. Adicionar Disciplina" << endl;
        cout << "3. Atribuir Disciplina a Professor" << endl;
        cout << "4. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                adicionarProfessor(professores);
                break;
            case 2:
                adicionarDisciplina(disciplinas);
                break;
            case 3:
                atribuirDisciplina(atribuicoes, professores, disciplinas);
                break;
            case 4:
                cout << "Saindo do programa. Até logo!" << endl;
                break;
            default:
                cout << "Opção inválida. Por favor, tente novamente." << endl;
                break;
        }
    } while (opcao != 4);

    return 0;
}
