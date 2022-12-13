# Laboratório 2 - Contador de palavras em C usando Kafka
## Programação para Sistemas Paralelos e Distribuídos

**Nome** | **Matricula** | **GitHub** 
---------|:-------------:|:----------:
André Aben-Athar de Freitas | 170056155 | Andreabenf
Lucas Ganda Carvalho | 170039668 | lucasgandac

## 1 - Pré-requisitos

### Bibliotecas em C
- librdkafka
- pkg-config
- glib

### Outras dependências
- Docker

## 2 -  Instancie o Kafka
Começamos ao instânciar o kafka através do Docker<br>
`sudo docker compose up`

## 3 - Compile os arquivos
Primeiro compile o consumidor <br>
`make consumer`

Após isso consuma o produtor <br>
`make producer`

## 4 - Execute o Produtor
`./consumer getting-started.ini`

## 5 - Execute o Consumidor
`./producer getting-started.ini
