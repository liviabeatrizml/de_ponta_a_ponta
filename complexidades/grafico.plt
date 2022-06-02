set terminal pdf
set border linewidth 1.5
set output 'graficos.pdf'
set title "Algoritmos de Ordenação"
set xlabel "Número de pontos"
set logscale y

set key inside left

plot "tempos_pt2.txt" u 1:2 w lines lc "green" title "Quick Sort"
replot "tempos_pt2.txt" u 1:3 w lines lc "red" lw 2 title "Merge Sort"
replot "tempos_pt2.txt" u 1:4 w lines lc "black" lw 2 title "Shell Sort"
replot "tempos_pt2.txt" u 1:5 w lines lc "aquamarine" lw 2 title "Comb Sort"
replot "tempos_pt2.txt" u 1:6 w lines lc "orange" lw 2 title "Heap Sort"