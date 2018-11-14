require 'numo/narray'
include Numo

sci = Numo::DFloat[65,80,67,35,58,60,72,75,68,92,36,50,2,58.5,46,42,78,62,84,70]
eng = Numo::DFloat[44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84]

name = ['理科','英語']
i=0

[sci,eng].each do |sub|
	print("#{name[i]}\n")
	print(" 平均点＝#{sub.mean}\n")
	print(" 標準偏差＝#{sub.stddev}\n")
	print(" 合計＝#{sub.sum}\n")
	sub.sort.reverse.each do |item|
		print(" #{item} \n")
	end
	print("\n")
	i+=1
end

