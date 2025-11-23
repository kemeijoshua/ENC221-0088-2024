class MyNeighbour:
    def _init_(self):
        self.name = ""
        self.colour = ""
        self.age = 0
        self.tribe = ""
        self.course = ""

# Create an object
neighbour = MyNeighbour()

neighbour.name = "dennis kimtai"
neighbour.colour = "black"
neighbour.age = 21
neighbour.tribe = "luhya"
neighbour.course = "mechanical engineering"

print(f"{neighbour.name} is {neighbour.colour} in colour")
print(f"{neighbour.name} is {neighbour.age} years old")
print(f"{neighbour.name} is {neighbour.tribe}")
print(f"{neighbour.name} is studying {neighbour.course}")