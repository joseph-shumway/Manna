var Observable = require("FuseJS/Observable");

var sidebarOpen = Observable(false);
var cardsMenu = Observable();

fetch("https://api.myjson.com/bins/125jfj")
.then(function(result) {
	result.json().then(function(data) {
		for (var i = 0; i < 10; i++) {
			var item = data[i];
			cardsMenu.add(item);
		}
	});
});


function setSidebarOpen() {
	sidebarOpen.value = true;
};

function setSidebarClosed() {
	sidebarOpen.value = false;
};

function goBack() {
	router.goBack();
}

function goToContactUsPage() {
	router.push("contact");
}

module.exports = {
	goBack: goBack,
	sidebarOpen: sidebarOpen,
	setSidebarClosed: setSidebarClosed,
	setSidebarOpen: setSidebarOpen,
	goToContactUsPage: goToContactUsPage,
	cardsMenu: cardsMenu
};