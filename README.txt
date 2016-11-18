# Bookstore - Drupal

#### _This is a small business website for a bookstore using a local Drupal development environment. November 18, 2016_

#### By _**Stephen Burden**_

## Specifications
* Create 2 basic pages - an "About" page, and a "Locations" page.
* Enable and configure the Contact module. Include a Contact form with a "Contact" link in the main menu. Make sure that anyone, regardless of their user role, can use the form to send you website feedback.
* Install the Views module, the Features module and the Strongarm module, and all their dependencies. At your code review, to verify that you understand the Features workflow your teacher will look at your Git revision history to verify that your Features modules were each created, committed, modified and then committed again.
* Create a feature called "Site Configuration". Make the feature track the strongarm variables site_name, site_slogan, theme_default and site_frontpage (The URL for the page displayed as your frontpage). Generate the feature in your modules directory, then enable it in the Features management page and then commit the feature with your repository.
* Then change the site's default theme, name and slogan and configure the website so that the "About" page is the front page. Then recreate your Site Configuration feature and commit the changes.
* Create a "Book Review" custom content type. The title field should be labelled "Book Title". It should also include fields for "Book Author", "Rating", and "Review Body".
* The "Book Title", "Book Author", "Rating", and "Review Body" fields should be required.
* The rating should be chosen with either a menu or radio buttons.
* The fields should be in the order "Book Title", "Book Author", "Rating", then "Review Body" when you fill out the form to add an instance of the book review content type.
* Create a feature called "Book Review" for your new content type and then generate it in your modules directory. Then, don't forget to enable the feature in the Features management page and then commit it to your repository.
* Create a view for the Book Review content type called "New Books". Don't bother creating a page for it, just create a block for it. The block should display the 3 newest book reviews as an unformatted list of linked titles, so that users can click on the title of a new book to go read the review of it. Don't use a pager.
* Name the block and display it in an easily visible region. Add at least 4 book reviews to verify that it is working.
* Add the "New Books" view to your "Book Review" feature and then recreate it, generating the files in your modules directory as usual, and then commit your changes.
* Create a custom "Reviewer" role. The Reviewer role should have all the same permissions as an authenticated user, and also be able to create new book reviews. They should be able to edit and delete their own book reviews, but not anyone else's. Create an account for a user who is a Reviewer to test it out.
* Create a special coupon to display as a block on the front page which is visible to authenticated users and not anonymous users. It should say something like "This week: use this coupon code to get 25% off on all Science Fiction!"
* Add a Google Map to your "Locations" page.

## Prerequisites
You will need MAMP/WAMP properly installed on your computer.

## Setup/Installation Requirements
* In the Terminal enter `git clone <repository-url>` this repository
* Open MAMP/WAMP, go to ”Preferences" and then "Web Server". Then set your document root folder to point to our project directory, then Start Server.
* In your web browser http://localhost:8888/phpMyAdmin/ and import the `bookstore.sql.zip` file (inside the db-backup directory) into MySQL
* Create a database account (user: `bookstore`, password: `bookstore`) in MySQL
* To view the go to http://localhost:8888 in your web browser_
* Admin user: `bookstore`, password: `bookstore`
* Reviewer user: `reviewer`, password: `reviewer`

## Link
https://github.com/spburden/bookstore-drupal

## Known Bugs
_There are no known bugs with this application._

## Support and contact details
_spburden@hotmail.com_

## Technologies Used
_Drupal 7.52, MySQL, CSS_

### License
The MIT License (MIT)

Copyright (c) 2016 **_Stephen Burden_**