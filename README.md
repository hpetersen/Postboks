# Postboks
The Postboks app syncs your e-Boks documents to a folder on your mac in the background. You never have to log in to the e-Boks website using NemID again.


Whenever you receive a new document you will get a notification and clicking it opens the document in Preview.app.
<img src="screenshots/new_document_notification.png" />

Use at your own risk. ([e-Boks Terms of use](http://www.e-boks.dk/signup_terms.aspx?type=enduser)))

## Gettings started

### 1. Download the latest version of Postboks
Get it from [The releases page](https://github.com/olegam/Postboks/releases/latest).


### 2. Get your e-Boks mobile access credentials from e-boks.dk

### 3. Sign in using your e-Boks mobile access credentials
<img src="screenshots/sign_in.png" />


You can optinally choose to have Postboks started automatically when you reboot your mac.
<img src="screenshots/settings_general.png" />

The postboks app will live in your menu bar and check for new documents every hour.

<img src="screenshots/menu_bar.png" />

Click the "Open documents folder" to see how all your documents are nicely organized by month.

You should note that your credentials are securely stored in the OS X keychain, but all your documents are stored as files on the disk. So you may want to enable disk encryption on your mac to make sure sensitive documents are encrypted.


## Limitiations

- Error handling is limited.
- The status bar icon does not look right in OS X dark mode.

## Features

- Syncs all e-Boks documents to a folder of your choice. E.g. your Dropbox folder.
- Support for multiple accounts.
- Secure storage of credentials using the OS X keychain.
- Automatic start.
- Sign in using the e-Boks mobile app credentials.
- Danish and English localization.

## Roadmap
- Support for authorization to multiple inboxes including company inboxes.
- Improve icon and graphical appearance.

## Contributing

Contributions to the app are very welcome.

## Related projects

- [e-boks-mailer](https://github.com/christianpanton/eboks-mailer) by [Christian Panton](https://twitter.com/christianpanton) is written in Python and works by scraping the mobile website. Can forward messages by email.
- [Net-Eboks](https://github.com/dk/Net-Eboks) by [Dmitry Karasik](https://twitter.com/dmitrykarasik) is written in perl and also uses the mobile app API. Can also expose documents through POP3. Dmitry even hosts an open server and promises that it will not store your credentials or your documents on his server.

## License
MIT
