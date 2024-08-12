from pydrive.auth import GoogleAuth
from pydrive.drive import GoogleDrive

# Authenticate with Google Drive
gauth = GoogleAuth()
gauth.LocalWebserverAuth()

# Create a GoogleDrive instance
drive = GoogleDrive(gauth)

# The ID of the Google Drive folder where you want to save the screenshots
folder_id = './versai'

# Function to upload a file to Google Drive
def upload_to_google_drive(file_path, folder_id):
    file = drive.CreateFile({'parents': [{'id': folder_id}]})
    file.SetContentFile(file_path)
    file.Upload()
    print(f'Screenshot uploaded with ID: {file.get("id")}')

# Example usage:
screenshot_path = 'path_to_your_screenshot.png'
upload_to_google_drive(screenshot_path, folder_id)
