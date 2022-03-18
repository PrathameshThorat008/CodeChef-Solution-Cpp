import os

files = [i for i in os.listdir(os.getcwd()) if os.path.isfile(i) and i.endswith(".cpp")]

head = """# CodeChef Solution : C++

This is an Open Source Repository created with the number of solution of problems on CodeChef practice section which are solved with C++.

# File Structure

- [Question_Name].cpp
  - This File Contains solution of problem [Question_Name] written in C++
- README.py
  - This is Python file used to create README.md from URL of problems stored in [Question_Name].cpp
- README.md
  - This is Nothing but an Overview of this Repository in Markdown which you're reading now in formatted way

# Questions

"""

foot = """
# Contact

Email : thoratprathamesh08@gmail.com <br />
GitHub : [PrathameshThorat008](https://github.com/PrathameshThorat008) <br />
Linkedin : [Prathamesh Thorat](https://www.linkedin.com/in/prathamesh-thorat-831b98224/) <br />
Sololearn : [Prathamesh Thorat](https://www.sololearn.com/profile/23789199) <br />
YouTube : [Prathame Codes](https://www.youtube.com/channel/UCWurZVa5Gt1ME_kYXEqkrcw) <br />
CodeChef : [prathamesh_8](https://www.codechef.com/users/prathamesh_8) <br />
"""

md = head

for file in files:
    with open(os.path.join(os.getcwd(),file),"r") as f:
        url = f.readline()[3:-1]
        qname = os.path.basename(file).replace("_"," ").replace(".cpp","")
        md += f"- [{qname}]({url})\n"
        
md += foot

with open("README.md","w") as f:
    f.write(md)
