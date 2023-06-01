-- Keep a log of any SQL queries you execute as you solve the mystery.
-- FIND the crime scene report
SELECT * FROM crime_scene_reports WHERE day = 28 AND month = 7 AND year = 2021;
-- FIND 3 interviews from this crime scene
SELECT * FROM interviews WHERE day = 28 AND month = 7 AND year = 2021;
--FIND license plates that left bakery within 10 min of crime
SELECT activity,license_plate,minute FROM bakery_security_logs WHERE day = 28 AND month = 7 AND year = 2021 AND hour = 10 AND minute > 14 AND minute <2
6;
--FIND
SELECT account_number, amount FROM atm_transactions WHERE day = 28 AND year = 2021 AND month = 7 AND atm_location LIKE 'Leggett%' AND transaction_type = 'withdraw';
SELECT caller,receiver, duration FROM phone_calls WHERE day = 28 AND year = 2021 AND month = 7 AND duration <60 ;
SELECT name FROM people JOIN bank_accounts ON people.id = bank_accounts.person_id WHERE account_number IN (SELECT account_number FROM atm_transactions WHERE day = 28 AND year = 2021 AND month = 7 AND atm_location LIKE 'Leggett%' AND transaction_type = 'withdraw') AND phone_number IN (SELECT caller FROM phone_calls WHERE day = 28 AND year = 2021 AND month = 7 AND duration <60) AND license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE day = 28 AND month = 7 AND year = 2021 AND hour = 10 AND minute>14 AND minute<26);
SELECT hour FROM flights WHERE day = 29 AND year = 2021 AND month = 7 ORDER BY hour ASC LIMIT 1;