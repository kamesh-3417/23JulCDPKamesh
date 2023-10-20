# Define the Event class
class Event:
    def __init__(self, name, date, location):
        self.name = name
        self.date = date
        self.location = location

    def display_event_details(self):
        print(f"Event: {self.name}")
        print(f"Date: {self.date}")
        print(f"Location: {self.location}")

# Define a function to create an event
def create_event():
    event_name = input("Enter the name of the event: ")
    event_date = input("Enter the date of the event: ")
    event_location = input("Enter the location of the event: ")

    event = Event(event_name, event_date, event_location)
    return event

# Main program
if __name__ == "__main__":
    events = []  # Create a list to store events

    while True:
        print("\nEvent Organizer Menu:")
        print("1. Create a new event")
        print("2. View event details")
        print("3. Exit")

        choice = input("Enter your choice: ")

        if choice == "1":
            event = create_event()
            events.append(event)
            print("Event created successfully!")

        elif choice == "2":
            if not events:
                print("No events to display.")
            else:
                print("\nEvent Details:")
                for index, event in enumerate(events):
                    print(f"Event {index + 1}:")
                    event.display_event_details()

        elif choice == "3":
            print("Exiting Event Organizer.")
            break

        else:
            print("Invalid choice. Please select a valid option.")

