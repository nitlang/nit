Analyzing ../contrib/pep8analysis/tests/micro/directive-in-code.pep
Analyzing ../contrib/pep8analysis/tests/micro/range.pep
Analyzing ../contrib/pep8analysis/tests/micro/to-graph.pep
Analyzing ../contrib/pep8analysis/tests/micro/types.pep
Analyzing ../contrib/pep8analysis/tests/privat/02-fibo.pep
Analyzing ../contrib/pep8analysis/tests/privat/04-abc.pep
Analyzing ../contrib/pep8analysis/tests/privat/04-leplusgrand.pep
Analyzing ../contrib/pep8analysis/tests/privat/05-0et100.pep
Analyzing ../contrib/pep8analysis/tests/privat/05-1a100.pep
Analyzing ../contrib/pep8analysis/tests/privat/05-aei.pep
Analyzing ../contrib/pep8analysis/tests/privat/05-otan.pep
Analyzing ../contrib/pep8analysis/tests/privat/05-simul_3n.pep
Analyzing ../contrib/pep8analysis/tests/privat/05-simul_n.pep
Analyzing ../contrib/pep8analysis/tests/privat/05-simul_x.pep
Analyzing ../contrib/pep8analysis/tests/privat/05-sommeVec.pep
Analyzing ../contrib/pep8analysis/tests/privat/06-calc-non-pur.pep
Analyzing ../contrib/pep8analysis/tests/privat/06-compte1.pep
Analyzing ../contrib/pep8analysis/tests/privat/06-majuscules.pep
Analyzing ../contrib/pep8analysis/tests/privat/06-menu.pep
Analyzing ../contrib/pep8analysis/tests/privat/06-print-non-pur.pep
Analyzing ../contrib/pep8analysis/tests/privat/06-processVec.pep
Analyzing ../contrib/pep8analysis/tests/privat/06-puissance2.pep
Analyzing ../contrib/pep8analysis/tests/privat/06-sommes1.pep
Analyzing ../contrib/pep8analysis/tests/privat/06-sommes2.pep
Analyzing ../contrib/pep8analysis/tests/privat/06-sommes3.pep
Analyzing ../contrib/pep8analysis/tests/privat/06-x100.pep
Analyzing ../contrib/pep8analysis/tests/privat/07-matrice.pep
Analyzing ../contrib/pep8analysis/tests/privat/07-stri.pep
Analyzing ../contrib/pep8analysis/tests/privat/07-stris.pep
Analyzing ../contrib/pep8analysis/tests/privat/07-tri.pep
Analyzing ../contrib/pep8analysis/tests/privat/07-tri2.pep
Analyzing ../contrib/pep8analysis/tests/privat/08-abus.pep
Analyzing ../contrib/pep8analysis/tests/privat/08-div-stack.pep
Analyzing ../contrib/pep8analysis/tests/privat/08-div-vars.pep
Analyzing ../contrib/pep8analysis/tests/privat/08-div.pep
Analyzing ../contrib/pep8analysis/tests/privat/08-fib.pep
Analyzing ../contrib/pep8analysis/tests/privat/08-incr.pep
Analyzing ../contrib/pep8analysis/tests/privat/08-liretab-stack.pep
Analyzing ../contrib/pep8analysis/tests/privat/08-liretab.pep
Analyzing ../contrib/pep8analysis/tests/privat/08-pile.pep
Analyzing ../contrib/pep8analysis/tests/privat/08-tab.pep
Analyzing ../contrib/pep8analysis/tests/privat/08-triforce.pep
Analyzing ../contrib/pep8analysis/tests/privat/08-varlocales.pep
Analyzing ../contrib/pep8analysis/tests/privat/09-liste.pep
Analyzing ../contrib/pep8analysis/tests/privat/09-produit.pep
Analyzing ../contrib/pep8analysis/tests/privat/fib.pep
Analyzing ../contrib/pep8analysis/tests/terrasa/addition_stro.pep
Analyzing ../contrib/pep8analysis/tests/terrasa/boucle.pep
Analyzing ../contrib/pep8analysis/tests/terrasa/chari_charo.pep
Analyzing ../contrib/pep8analysis/tests/terrasa/division.pep
Analyzing ../contrib/pep8analysis/tests/terrasa/hello.pep
Analyzing ../contrib/pep8analysis/tests/terrasa/if_else.pep
Analyzing ../contrib/pep8analysis/tests/terrasa/if_elseif_else.pep
Analyzing ../contrib/pep8analysis/tests/terrasa/lecture_chaine.pep
Analyzing ../contrib/pep8analysis/tests/terrasa/matrice.pep
Analyzing ../contrib/pep8analysis/tests/terrasa/max_tableau.pep
Analyzing ../contrib/pep8analysis/tests/terrasa/multiplication.pep
Analyzing ../contrib/pep8analysis/tests/terrasa/reverse_tableau.pep
Analyzing ../contrib/pep8analysis/tests/terrasa/somme_tableau.pep
Analyzing ../contrib/pep8analysis/tests/terrasa/soustraction.pep
Analyzing ../contrib/pep8analysis/tests/terrasa/tri_bulles.pep
# Notes:
Error:   ../contrib/pep8analysis/tests/micro/directive-in-code.pep:4; unreachable instructions (dead code?)
Error:   ../contrib/pep8analysis/tests/micro/directive-in-code.pep:2; data in program flow (missing BR?)
Warning: ../contrib/pep8analysis/tests/micro/types.pep:1; using data of unsupported type in register A, expected word (got two uninitialized byte)
Warning: ../contrib/pep8analysis/tests/micro/types.pep:1; using data of unsupported type in memory address 123, expected word (got two uninitialized byte)
Warning: ../contrib/pep8analysis/tests/micro/types.pep:3; using a partial word in register A, expected a full word (got a 1st byte of word followed by byte of code)
Warning: ../contrib/pep8analysis/tests/micro/types.pep:3; using data of unsupported type in memory address 123, expected word (got two uninitialized byte)
Warning: ../contrib/pep8analysis/tests/micro/types.pep:6; using data of unsupported type in register A, expected word (got two byte of code)
Warning: ../contrib/pep8analysis/tests/micro/types.pep:6; using data of unsupported type in memory address 123, expected word (got two uninitialized byte)
Warning: ../contrib/pep8analysis/tests/privat/05-1a100.pep:10; using data of unsupported type in memory address 1, expected word (got two byte of code)
Error:   ../contrib/pep8analysis/tests/privat/06-calc-non-pur.pep:32; this instruction is not followed by valid code as it should (misplaced data or missing BR?)
Error:   ../contrib/pep8analysis/tests/privat/06-calc-non-pur.pep:32; unreachable instructions (dead code?)
Warning: ../contrib/pep8analysis/tests/privat/06-calc-non-pur.pep:14; overwriting code at instr@m76 with byte of code (code rewriting?)
Warning: ../contrib/pep8analysis/tests/privat/06-menu.pep:13; jumps to a dynamic address, this may be OK but the CFG may be wrong
Warning: ../contrib/pep8analysis/tests/privat/07-stri.pep:7; printing uninitialized data, exepected ASCII
Warning: ../contrib/pep8analysis/tests/privat/07-stri.pep:9; printing uninitialized data, exepected ASCII
Error:   ../contrib/pep8analysis/tests/privat/07-stris.pep:39; unreachable instructions (dead code?)
Warning: ../contrib/pep8analysis/tests/privat/08-abus.pep:8--10; unreachable instructions (dead code?)
