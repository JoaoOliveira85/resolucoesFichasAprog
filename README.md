# Resoluções das Fichas de APROG (1NA)

Pequeno repositório onde vou colocando as minhas implementações comentadas dos exerícicos da cadeira de APROG. Em cada pasta vão encontrar um ficheiro por exercício. Cada ficheiro tem as respostas a cada alína do exercício em questão bem como o código relevante comentado para que seja mais fácil perceber o que cada linha está a fazer.

Se quiserem estão convidados a contribuir com as vossas respostas. Para isso criem um branch com a vossa identificação (nome, número de aluno, alcunha, fruto preferido ou o que quiserem) e criem um ficheiro adicional para cada exercício para o qual queiram contribuir, por exemplo:

* ficha4/exercicio1-joao.c

Depois façam PR que é adicionado ao repositório. 

**PODEM CONSULTAR O CÓDIGO DIRETAMENTE DESTA PÁGINA SEM TEREM QUE INSTALAR NADA** mas para quem quiser transferir uma cópia (clone) para o seu computador seguem-se as instruções: 

## Sobre Sistemas de Controlo de Versões (VCS)

É importante (e penso que vai ser necessário no curso) instalarem e aprender o que é e como usar o GIT. De forma muito geral [GIT](https://git-scm.com/about) é um [sistema de controlo de versões](https://en.wikipedia.org/wiki/Version_control) (também chamado Source Control System). Em vez de termos algo do tipo "trabalho", "trabalhoFinal", "trabalhoFinal2", "trabalhoFinal2asdf", "trabalhoFinal3IMPRIMIRESTE", etc. um sistema de controlo de versões como o GIT permite organizar o histórico de alterações dum projeto para que seja mais fácil manter por vários colaboradores.

Há um curso rápido e gratuito para aprenderem os [básicos de GIT em 10 minutos](https://www.freecodecamp.org/news/learn-the-basics-of-git-in-under-10-minutes-da548267cc91/) que faz uma introdução rápida.

Há também um curso rápido e gratuito para [utilização da linha de comandos (CLI)](https://developer.mozilla.org/en-US/docs/Learn/Tools_and_testing/Understanding_client-side_tools/Command_line).

São duas aptidões que vão ser essenciais no decorrer do curso por isso acho importante serem treinadas.

### Instalar o GIT

Os sistemas operativos Linux e MacOS em princípio já deverão ter o git instalado por omissão ainda assim, caso haja algum erro a instalação é simples.

#### Linux

Basta abrir uma janela de terminal e correr o seguinte comando (necessita de privilégios de SU):

```sh
sudo apt-install git-all
```

#### MacOS

Basta abrir uma janela de terminal e correr o seguinte comando (penso que deve ser feito por um administrador):

```sh
xcode-select --install
```

#### Windows

Basta ir à página do [GIT-SCM](https://git-scm.com/download/win) e fazer download da versão mais recente para windows.


## Usar GIT para transferir este repositório

Depois de ter o git instalado basta abrir uma janela de terminal (powershell no windows) para começar a usar. O endereço para clonar este repositório está no botão `<> code`. Em qualquer dos casos fica aqui o endreço:

```
git@github.com:JoaoOliveira85/resolucoesFichasAprog.git
```

Assim, basta correr o comando 

```sh
git clone git@github.com:JoaoOliveira85/resolucoesFichasAprog.git
```
dentro da página desejada para clonar uma cópia local do repositório. 

## Ambiente Gráfico

Para quem ainda não está muito confortável em usar a linha de comandos (vai sendo gradualmente mais essencial ao longo do nosso curso) podem também usar um cliente gráfico como o [Github Desktop](https://desktop.github.com/) ou o [GitKraken](https://www.gitkraken.com/) que tornam muito mais simples a utilização deste sistema.

## IDEs e coisas grátis

Os alunos do ISEP (e outras instituições) têm acesso a [conta de estudante do github](https://education.github.com/pack) que tem muitas coisas grátis que são bastante úteis das quais destaco os IDEs da [Jetbrains](https://www.jetbrains.com/) (para esta cadeira o [CLion](https://www.jetbrains.com/clion/) mas no próximo semestre o WebStorm, o PHPStorm e o Datagrip talvez sejam uteis) e o [GitKraken](https://www.gitkraken.com/). Alternativamente também recomendo o [VSCode](https://code.visualstudio.com/) porém o VSCode [não é um IDE, é um editor de texto](https://stackoverflow.com/questions/199207/do-you-draw-a-distinction-between-text-editors-and-ides) e por isso dá mais trabalho a configurar (é preciso instalar uma série de plugins para funcionar). Uma alternativa melhor talvez seja o [Visual Sudio Code Community Edition](https://visualstudio.microsoft.com/vs/community/) que é gratuito. 

Sinceramente acho que o Codeblocks é desnecessariamente confuso e complicado e talvez queiram experimentar um IDE ou editor de texto mais moderno durante o vosso estudo inicial para facilitar o primeiro contacto com C. Posteriormente usem o codeblocks para se prepararem para a prova prática. Mas é só uma sugestão. 

## Ajuda

Se precisarem de ajuda estejam à vontade em mandar-me mensagem no grupo de Whatsapp ou e-mail para 1212236@isep.ipp.pt.
