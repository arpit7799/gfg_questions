# insert into dictionary
def insert_dict(query, dict):
    dict[query[1]] = query[2]
    
    
# deleting from dictionary
def del_dict(query, dict):
    if query[1] in dict:
        del dict[query[1]]
        return True
    elif query[1] not in dict:
        return False
            

# print marks of required name
def print_dict(key, dict):
    if key in dict:
        print("Marks of "+ key + " is " + dict[key])
        return True
    else:
        return False
    