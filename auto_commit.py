import os
from datetime import datetime

# File to update daily
file_name = "streak.txt"

# Append current timestamp
with open(file_name, "a") as f:
    f.write(f"Commit made at {datetime.now()}\n")

# Git commands


os.system("git add .")
os.system(f'git commit -m "Auto commit: {datetime.now()}"')
os.system("git push")
