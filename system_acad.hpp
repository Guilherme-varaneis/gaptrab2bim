/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   system_acad.hpp
 * Author: guiva
 *
 * Created on 5 de Junho de 2023, 15:02
 */

#ifndef SYSTEM_ACAD_HPP
#define SYSTEM_ACAD_HPP

#include <iostream>
#include <vector>
#include <string>


class system_acad {
public:
    system_acad();
    system_acad(const system_acad& orig);
    virtual ~system_acad();
    
    // cabeçalho
    
// Struct Professor
struct Professor {
    int codigoProfessor;
    std::string nome;
    std::string endereco;
};

// Struct Disciplina
struct Disciplina {
    int codigoDisciplina;
    std::string descricao;
    int cargaHoraria;
};

// Struct Atribuicao
struct Atribuicao {
    int codigoAtribuicao;
    std::string dataAtribuicao;
    int codigoProfessor;
    int codigoDisciplina;
};

// Função para adicionar um novo professor
void adicionarProfessor(std::vector<Professor>& professores);

// Função para adicionar uma nova disciplina
void adicionarDisciplina(std::vector<Disciplina>& disciplinas);

// Função para atribuir uma disciplina a um professor
void atribuirDisciplina(std::vector<Atribuicao>& atribuicoes, const std::vector<Professor>& professores, const std::vector<Disciplina>& disciplinas);
   
private:

};

#endif /* SYSTEM_ACAD_HPP */

