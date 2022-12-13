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
Vá para a pasta 'kafka' e instancie o kafka através do Docker<br>
`sudo docker compose up`

`docker compose exec broker \
  kafka-topics --create \
    --topic words \
    --bootstrap-server localhost:9092 \
    --replication-factor 1 \
    --partitions 1`

## 3 - Compile os arquivos
Primeiro compile o consumidor <br>
`make consumer`

Após isso consuma o produtor <br>
`make producer`

## 4 - Execute o Produtor
`./consumer getting-started.ini`

## 5 - Execute o Consumidor
`./producer getting-started.ini
