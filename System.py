class System:
    def __init__(self, users):
        self.users = users
        
    def logIn(account):
        loggedIn = False
        for i in {self.users}:
            if i == account:
                loggedIn = True
                print("Log in success!")
        
        if not loggedIn:
            print("Log in failed")
            
    def addAccount(account):
        {self.users}.append(account)
        