// Function to search problems by program name
function searchProblems() {
    let searchQuery = document.getElementById("searchBar").value.toLowerCase();
    let programItems = document.querySelectorAll('.card'); 
    let found = false;

    programItems.forEach(item => {
        let programName = item.querySelector('.card-back h3').innerText.toLowerCase(); 
        // Check if program name includes the search query
        if (programName.includes(searchQuery)) {
            item.style.display = 'flex'; 
            found = true;
        } else {
            item.style.display = 'none'; 
        }
    });

    // Show a message if no results are found and search query isn't empty
    let problemForm = document.getElementById('problem-form');
    if (!found && searchQuery !== '') {
        problemForm.style.display = 'block'; 
    } else {
        problemForm.style.display = 'none'; 
    }
}

// Function to toggle the sidebar on small screens
function toggleSidebar() {
    let sidebar = document.querySelector('.sidebar');
    // Toggle the 'show' class to display or hide the sidebar
    sidebar.classList.toggle('show');
}

// Close Sidebar when close icon is clicked
function closeSidebar() {
    let sidebar = document.querySelector('.sidebar');
    sidebar.classList.remove('show');
}

// Function to show the selected card and hide the others
function showCard(cardId) {
    let cards = document.querySelectorAll('.card');
    cards.forEach(card => {
        // Hide all cards
        card.style.display = 'none';
    });

    // Show the selected card by its ID
    let selectedCard = document.getElementById(cardId);
    if (selectedCard) {
        selectedCard.style.display = 'block';
    }
}
