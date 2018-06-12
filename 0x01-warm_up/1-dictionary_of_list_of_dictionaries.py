#!/usr/bin/python3
'''
Calls the JSON placeholder REST api
and saves information about a given
employee's TODO list progress in a
json file
'''
if __name__ == "__main__":
    import requests
    from sys import argv

    new_dict = {}
    staff = requests.get(
        'https://jsonplaceholder.typicode.com/users/'.json()
    for i in range(len(staff)):
        usr = str(staff[i]["id"])
        todo_list = requests.get(
            'https://jsonplaceholder.typicode.com/todos?userId={}'
            .format(usr).json()
        items = []
        for j in range(len(todo_list)):
            todo = {
                "username": staff[i]["name"],
                "task": todo_list[j]["title"],
                "completed": todo_list[j]["completed"]
                }
            items.append(todo)
        new_dict[usr] = items
    print(new_dict)