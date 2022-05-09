from mailjet_rest import Client
import os
api_key = '7d2b36ac6295123c4bdc1abefa004b4a'
api_secret = 'aa9c7ca6f2a1ad426db9daf0692f948f'
mailjet = Client(auth=(api_key, api_secret), version='v3.1')
data = {
  'Messages': [
    {
      "From": {
        "Email": "saidineshbb24@gmail.com",
        "Name": "Sai"
      },
      "To": [
        {
          "Email": "20pw24@psgtech.ac.in",
          "Name": "Sai"
        }
      ],
      "Subject": "Greetings from Mailjet.",
      "TextPart": "My first Mailjet email",
      "HTMLPart": "<h3></h3>",
      "CustomID": "AppGettingStartedTest"
    }
  ]
}
result = mailjet.send.create(data=data)
print(result.status_code)
print(result.json())