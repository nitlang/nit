module maybeSameWord

fun reverseString (word: String): String
do
	var length = word.length
	var temp: String = ""
	for x in [0..length-1]
	do
		length = length - 1
		temp = temp + word[length].to_s	
	end
	return temp
end

fun compareWord (word1: String, word2: String): Float
do 
	var seq: Int = 0
	var length: Int = word1.length
	if word2.length < word1.length then
		length = word2.length
	end

	for x in [0..length-1]
	do
		if word1[x] == word2[x] then
			seq = seq + 1	
		end
	end	
	return seq.to_f
end

fun maybeSameWord (word1: String, word2: String): Bool
do
	var maybe = false
	var word1Length = word1.length.to_f
	var word2Length = word2.length.to_f

	var wordLengthComp: Float = word1Length / word2Length
	if word1Length > word2Length then
		wordLengthComp = word2Length / word1Length
	end

	var seq = compareWord(word1, word2)
    var seqR = compareWord(reverseString(word1), reverseString(word2))
    var ratioSeq = seq / word1Length
    var ratioSeqR = seqR / word1Length

    var wordLengthRestriction = 0.75
    if word1Length > 4.0 then
    	wordLengthRestriction = 0.6
    end

	if (ratioSeq >= 0.6 or ratioSeqR >= 0.6) and wordLengthComp >= wordLengthRestriction then
		maybe = true
	end
	return maybe
end

fun compareWordWithArray (word: String, array: Array[String]): nullable String
do
	for item in array do
		if maybeSameWord(word, item) then
			return item
		end
	end
	return null
end


