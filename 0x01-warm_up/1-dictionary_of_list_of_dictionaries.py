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
    'https://jsonplaceholder.typicode.com/users/').json()
    for item in staff:
        usr = str(item["id"])
        todo_list = requests.get()
        'https://jsonplaceholder.typicode.com/todos?userId={}'
        .format(usr)).json()
        items = []
        for todo in todo_list:
            dct = {
                "username": item["name"],
                "task": todo["title"],
                "completed": todo["completed"]
                }
            items.append(dct)
        new_dict[usr] = items
    print(new_dict)