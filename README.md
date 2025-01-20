# # Embarcatech - UART

Este projeto implementa uma comunicação serial via UART entre o PluTTy e o Raspberry Pi Pico W, além da extensão WOWKI para simulação dos componentes que formam o circuito. O código é desenvolvido em C para sistemas embarcados e integra um conjunto de LEDs e buzzer para feedback visual e sonoro.

## Estrutura do Projeto

- **UART.c**: Contém a lógica principal de comunicação, incluindo inicialização, loop de execução e manipulação de eventos.
- **diagram.json**: Arquivo que contém a estrutura da simulação do WOKWI.
- **wokwi.toml**: Arquivo para definir o caminho do .elf e .uf2 usado para a simulação.
- **CMakeLists.txt**: Definição dos processos de compilação e requisitos necessários.
- **pico_sdk_import.cmake**: Arquivo com as configurações de importação do Pico SDK.

## Requisitos

- **Raspberry Pi Pico W**: Placa de desenvolvimento baseada no microcontrolador RP2040.
- **Um led RGB**: Um led ou um conjunto de três leds que possam simular o funcionamento de um led RGB.
- **Buzzer**: Um buzzer para emissão de sons.
- **Compilador ARM GCC**: Necessário para compilar o código C para a arquitetura ARM Cortex-M0+ do Pico W.
- **Pico SDK**: SDK oficial para o Raspberry Pi Pico W, necessário para desenvolvimento e compilação.
- **WOWKI**: Biblioteca ou conjunto de ferramentas para simulação do hardware específico do projeto.
- **PluTTy**: Software que fornece uma interface para que o usuário se comunique de forma serial com a placa.

## Equipe
- **Hiago Moura**
- **Elmer Carvalho**
- **Ikaro Silva**
- **Ana Luisa**
- **Breno Fernandes**

## Vídeo demonstrativo 
<https://drive.google.com/file/d/1c4Hk2H1_27jSIdynwD3L1dJ8IAwpQvle/view?usp=sharing >