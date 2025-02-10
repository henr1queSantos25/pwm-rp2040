# ⚙️ Controle de Servomotor por PWM com Raspberry Pi Pico W  

Este repositório contém um código para o **controle de um servomotor** utilizando **modulação por largura de pulso (PWM)** no **Raspberry Pi Pico W**. O projeto simula a movimentação de um **motor micro servo padrão** no **Wokwi**, ajustando o ângulo do servomotor de **0° a 180°** de maneira suave.  

## 🎯 Objetivo  

- Configurar e utilizar o **módulo PWM** do Raspberry Pi Pico W.  
- Controlar a posição do **braço do servomotor** ajustando o ciclo de trabalho do PWM.  
- Implementar uma movimentação suave do **ângulo de 0° a 180°**.  
- Simular o funcionamento no **Wokwi**.  

## 📹 Vídeo do Projeto  

- **[Ver Vídeo](https://drive.google.com/file/d/1T09BNhtxI0HTDQl10dUsw8ocDCGFOq1R/view?usp=sharing)**

## 🛠️ Tecnologias Utilizadas  

- **Linguagem de Programação**: C.  
- **Placa Microcontroladora**: Raspberry Pi Pico W.  
- **Bibliotecas**:  
  - **Pico SDK** para manipulação de GPIO e PWM.  
- **Ferramentas**:  
  - **Wokwi** (Simulação).  
  - **VS Code** (Ambiente de Desenvolvimento).  

## 🗂️ Estrutura do Repositório  

- `pwm-rp2040.c`: Código-fonte principal contendo a implementação do controle PWM.  
- `README.md`: Documentação detalhada do projeto.  
- `diagram.json`: Configuração do circuito para simulação no **Wokwi**.  

## 🚀 Como Funciona  

O sistema configura a **GPIO 22** para gerar um **sinal PWM** com **frequência de 50Hz** (período de 20ms), utilizado para controlar a posição do **servomotor**.  

1. **O servo inicia na posição de 180°** (Pulso de **2400µs**).  
2. **Após 5 segundos, ele move para 90°** (Pulso de **1470µs**).  
3. **Após mais 5 segundos, ele move para 0°** (Pulso de **500µs**).  
4. **Em seguida, o servo começa a oscilar suavemente** entre **0° e 180°**, aumentando ou diminuindo o ciclo de trabalho de **5µs a cada 10ms**.  

✅ **A movimentação do servo é contínua e suave**.  
✅ **Os pulsos de controle seguem os padrões dos servomotores convencionais**.  

## 🔌 Configuração do Hardware  

| Componente  | Pino do Pico W |  
|------------|---------------|  
| Servomotor | GP22          |  

## ✨ Funcionalidades Demonstradas  

- **Geração de PWM** com frequência de **50Hz**.  
- **Ajuste preciso do ângulo do servomotor** usando ciclos de trabalho específicos.  
- **Movimentação periódica e suave do servomotor** entre 0° e 180°.  
- **Simulação no Wokwi**.  

## 💡 Desenvolvido por  

- **Henrique Santos**  
- **[LinkedIn](https://www.linkedin.com/in/dev-henriqueo-santos/)**  
