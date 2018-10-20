// Chrome extension icon click event
chrome.browserAction.onClicked.addListener(function(tab) {

  // execute script
  chrome.tabs.executeScript(null, {file: "app.js"});

  // execute code
  chrome.tabs.executeScript({code: "alert('chrome-extension-boilerplate: background.js executed.')"});

});