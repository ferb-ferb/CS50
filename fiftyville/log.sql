-- Keep a log of any SQL queries you execute as you solve the mystery.
-- FIND the crime scene report
SELECT * FROM crime_scene_reports WHERE day = 28 AND month = 7 AND year = 2021;
-- FIND 3 interviews from this crime scene
SELECT * FROM interviews WHERE day = 28 AND month = 7 AND year = 2021;
--FIND license plates that left bakery within 10 min of crime
SELECT activity,license_plate,minute FROM bakery_security_logs WHERE day = 28 AND month = 7 AND year = 2021 AND hour = 10 AND minute > 14 AND minute <2
6;
