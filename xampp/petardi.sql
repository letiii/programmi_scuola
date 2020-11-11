-- phpMyAdmin SQL Dump
-- version 4.6.5.2
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Creato il: Apr 10, 2017 alle 12:59
-- Versione del server: 10.1.21-MariaDB
-- Versione PHP: 7.1.1

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `petardi`
--

-- --------------------------------------------------------

--
-- Struttura della tabella `persone`
--

CREATE TABLE `persone` (
  `cod_fiscale` bigint(20) UNSIGNED NOT NULL,
  `nome` varchar(30) DEFAULT NULL,
  `cognome` varchar(30) DEFAULT NULL,
  `età` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dump dei dati per la tabella `persone`
--

INSERT INTO `persone` (`cod_fiscale`, `nome`, `cognome`, `età`) VALUES
(1, 'Edo', 'Barbaglia', 17);

-- --------------------------------------------------------

--
-- Struttura della tabella `petardi`
--

CREATE TABLE `petardi` (
  `codProdotto` bigint(20) UNSIGNED NOT NULL,
  `nomeProdotto` varchar(30) DEFAULT NULL,
  `prezzo` float DEFAULT NULL,
  `descrizione` varchar(500) DEFAULT NULL,
  `codCliente` bigint(20) UNSIGNED NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dump dei dati per la tabella `petardi`
--

INSERT INTO `petardi` (`codProdotto`, `nomeProdotto`, `prezzo`, `descrizione`, `codCliente`) VALUES
(1, 'magnum', 2.5, '10 pz', 0),
(2, 'vulcano', 4.5, '3 pz', 0),
(3, 'las manos de dios', 15, '25', 1);

--
-- Indici per le tabelle scaricate
--

--
-- Indici per le tabelle `persone`
--
ALTER TABLE `persone`
  ADD UNIQUE KEY `cod_fiscale` (`cod_fiscale`);

--
-- Indici per le tabelle `petardi`
--
ALTER TABLE `petardi`
  ADD UNIQUE KEY `codProdotto` (`codProdotto`),
  ADD KEY `codCliente` (`codCliente`),
  ADD KEY `codCliente_2` (`codCliente`);

--
-- AUTO_INCREMENT per le tabelle scaricate
--

--
-- AUTO_INCREMENT per la tabella `persone`
--
ALTER TABLE `persone`
  MODIFY `cod_fiscale` bigint(20) UNSIGNED NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;
--
-- AUTO_INCREMENT per la tabella `petardi`
--
ALTER TABLE `petardi`
  MODIFY `codProdotto` bigint(20) UNSIGNED NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
