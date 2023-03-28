# Goal: 

add an element to the has table

## prototype

int hash_table_set(hash_table_t \*ht, const char \*key, const char \*value)

## steps

1. if invalid entry (empty string value, null key, nunll pointers) return error

2. find new node's index via task 2's key_index function(key)

3. malloc hte ne wnode

 - return error if malloc failed 

4. put value into new node

 - if there is already a node with the same key, make this new node hte head, and make this new->next=old node
