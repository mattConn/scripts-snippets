cd root/of/operation;
for f in *.txt
do
cat $f > ../../../destination/$f
done
