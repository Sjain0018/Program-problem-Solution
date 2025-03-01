// Function to search problems by program name and filter by category
let debounceTimer; 

function searchProblems() {
    clearTimeout(debounceTimer);  
    debounceTimer = setTimeout(function () {  
        let searchQuery = document.getElementById("searchBar").value.toLowerCase();
        let programItems = document.querySelectorAll('.sidebar ul li');
        let found = false;

        programItems.forEach(item => {
            let programName = item.innerText.toLowerCase();
            let category = item.dataset.category; 
            
            // Check if program name includes the search query and category matches the selected filter
            if (programName.includes(searchQuery) && checkCategory(category)) {
                item.style.display = 'block'; 
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
    }, 300); // Delay of 300ms for debouncing
}

// Function to check category filter selection
function checkCategory(category) {
    let filterValue = document.getElementById("categoryFilter").value;
    if (filterValue === "all") {
        return true; 
    } else if (category.split(' ').includes(filterValue)) {
        return true; 
    } else {
        return false; 
    }
}

// Function to filter the list based on category selection
function filterCategory() {
    let programItems = document.querySelectorAll('.sidebar ul li');
    let filterValue = document.getElementById("categoryFilter").value;

    programItems.forEach(item => {
        let category = item.dataset.category;

        // Show or hide items based on the selected category
        if (filterValue === "all" || category.split(' ').includes(filterValue)) {
            item.style.display = 'block';
        } else {
            item.style.display = 'none';
        }
    });

    // Reset the search bar and rerun the search to show all items
    document.getElementById("searchBar").value = '';
    searchProblems();  
}

// Function to toggle the sidebar on small screens
function toggleSidebar() {
    let sidebar = document.querySelector('.sidebar');
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
        card.style.display = 'none';
    });

    let selectedCard = document.getElementById(cardId);
    if (selectedCard) {
        selectedCard.style.display = 'block';
    }
}
