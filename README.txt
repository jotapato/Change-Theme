
-- SUMMARY --

The changetheme module creates a block that can be activated in any region
of all the themes that will be used.
For each group, the administrator can select which themes are going to be 
enabled for the user.
The block show the user a list of all enabled themes and allow them to 
choose between them.
The user may change the theme in each group.
Inside of a group, the theme can be changed at any moment.
For logged in users, the user options is updated so that their last 
selection will stay the same the next time they log in.
Anonymous users have their choices saved in the session variable.

-- REQUIREMENTS --

None.


-- INSTALLATION --

* Install as usual, see http://drupal.org/node/70151 for further information.


-- CONFIGURATION --

* Configure user permissions in Administer >> User management >> Permissions >>
  changetehem module:

  - administer change theme

    Users in roles with the "administer change theme" permission will see
    the administration page and can choose which themes belogn to each group.

  - change theme

    Users in roles with the "change theme" permission will be able to see
    the block and can change the theme for each group.
