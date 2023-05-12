class Employee:
    
    def __init__(self, name, id_number, department, job_title):
        self.name = name
        self.id_number = id_number
        self.department = department
        self.job_title = job_title

    def setName(self, name):
        self.name = name

    def getName(self):
        return self.name

    def setIdNumber(self, id_number):
        self.id_number = id_number

    def getIdNumber(self):
        return self.id_number

    def setDepartment(self, department):
        self.department = department

    def getDepartment(self):
        return self.department

    def setJobTitle(self, job_title):
        self.job_title = job_title

    def getJobTitle(self):
        return self.job_title

    def toString(self):
        return "Employee Name: " + self.getName() + ", ID Number: " + str(self.getIdNumber()) + ", Department: " + \
               self.getDepartment() + ", JobTitle: " + self.getJobTitle()
susan = Employee("Susan Meyers", 47899, "Accounting", "Vice President")
print('Name:',susan.name)
print('ID Number:', susan.id_number)
print('Department:', susan.department)
print("Job Title:", susan.job_title)
print('')
mark = Employee("Mark Jones", 39119, "IT", "Programmer")
print('Name:',mark.name)
print('ID Number:', mark.id_number)
print('Department:', mark.department)
print("Job Title:", mark.job_title)
print('')
joy = Employee("Joy Rogers", 81774, "Manufacturing", "Engineer")
print('Name:',joy.name)
print('ID Number:', joy.id_number)
print('Department:', joy.department)
print("Job Title:", joy.job_title)
