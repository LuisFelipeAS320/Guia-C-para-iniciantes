# Conflito de merge resolvido



Durante o desenvolvimento deste projeto, foi realizado um conflito de merge controlado com o objetivo de praticar a identificação e a resolução manual de conflitos utilizando o Git.

## Como o conflito foi criado



Para provocar o conflito, eu criei a branch feature/conflito-readme. Nessa branch, uma linha da seção de público-alvo do arquivo README.md foi alterada e a modificação foi registrada em um commit. Em seguida, foi realizado o retorno para a branch main, onde a mesma linha do README.md foi alterada de um jeito diferente e registrada em outro commit. Então, as duas branches possuíam alterações diferentes na mesma região do mesmo arquivo.



## Identificação do conflito

Quando eu tentei realizar o merge da branch feature/conflito-readme na main, o Git não conseguiu determinar automaticamente qual das duas alterações deveria ser mantida e informou a existência de um conflito no README.md. O conteúdo em conflito foi identificado pelos seguintes marcadores:


<<<<<<< HEAD
Pessoas começando em programação ou tendo o primeiro contato e que queiram aprender fundamentos da linguagem C.
=======
Pessoas começando em programação ou tendo o primeiro contato com a linguagem C.
>>>>>>> feature/conflito-readme


A parte entre <<<<<<< HEAD e ======= representava o conteúdo presente na branch main, enquanto a parte entre ======= e >>>>>>> feature/conflito-readme representava o conteúdo da outra branch.



## Resolução



Eu resolvi o conflito editando o arquivo README.md. Os marcadores de conflito foram removidos e eu analisei as duas versões para decidir como eu iria deixar o README. Após a edição, o arquivo foi adicionado novamente à área de staging com:


git add README.md


Em seguida, Registrei a resolução do conflito e o merge através de um commit:


git commit -m "merge: resolve conflito no README"


Por fim, as alterações foram enviadas ao repositório remoto utilizando git push.

## 

