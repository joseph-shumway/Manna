var Observable = require("FuseJS/Observable");

var sidebarOpen = Observable(false);


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
	goToContactUsPage: goToContactUsPage
};