var iterator = collection.iterator

while iterator.is_ok do
	print iterator.item
	iterator.next
end
