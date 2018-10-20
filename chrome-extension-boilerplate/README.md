# chrome-extension-boilerplate
Boilerplate for Chrome extension development.

## To Install
Navigate to URL [chrome://extensions/](chrome://extensions/) in Chrome browser.

Drag and drop this folder ("chrome-extension-boilerplate", or "chrome-extension-boilerplate-master") into Chrome browser window and grant necessary permissions.

## To Install On ChromeOS
Navigate to URL [chrome://extensions/](chrome://extensions/) in Chrome browser.

Click on "Load unpacked extension..." at the top of the page and select this folder ("chrome-chrome-extension-boilerplate", or "chrome-extension-boilerplate-master").


# Documentation 

- ## manifest.json
    - Specifies extension permissions, styles and scripts. Currently, "app.js" is set to run on extension icon click.  
Read more about manifests [here](https://developer.chrome.com/extensions/manifest).

- ## background.js
    - Handles scripts and browser events.  
    Read more about background pages [here](https://developer.chrome.com/extensions/background_pages).

- ## app.js
    - Current script to run on extension activation (icon click).

- ## style.css
    - Current extension stylesheet.