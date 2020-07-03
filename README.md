# MUSCLE
# Language: C++
# Input: FASTA
# Output: prefix
# Tested with: PluMA 1.1, GCC 4.8.4
# Dependency: Qiime 1.9.1, Python 2.7

PluMA plugin to group sequences using MUltiple Sequence Comparison by Log-Expectation
(MUSCLE, Edgar et al 2004), as a part of Qiime (Caporaso et al, 2010).

The plugin takes as input a FASTA file of sequences, and will produce an output FASTA
file of clusters.
